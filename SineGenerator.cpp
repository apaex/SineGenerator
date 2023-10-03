#define STEP_COUNT 250         //  разложение 320 * 500 * 2 = 16МГц / 50Гц.
#define PULSE_PER_STEP (160000/STEP_COUNT)
#define SCALE 0.9
unsigned int arr_pwm[STEP_COUNT];
#define _USE_MATH_DEFINES

#define PER_LINE 8

#include <fstream>
#include <math.h>

int main()
{
    long double angle = 0;
    long double d = M_PI / STEP_COUNT;

    for (int i = 0; i < STEP_COUNT; ++i)
    {
        arr_pwm[i] = lroundl(sin(angle) * PULSE_PER_STEP * SCALE);
        angle += d;
    }

    std::ofstream f("..\\pvs1\\src\\sin.h");

    f << "#pragma once" << std::endl;
    f << std::endl;
    f << "#define STEP_COUNT  " << STEP_COUNT << std::endl;
    f << "#define PULSE_PER_STEP " << PULSE_PER_STEP << std::endl;
    f << std::endl;
    f << "const unsigned int arr_pwm[STEP_COUNT] = " << std::endl;
    f << "{" << std::endl;
    for (int i = 0; i < STEP_COUNT; )
    {
        if (i % PER_LINE == 0)
            f << '\t';

        f << arr_pwm[i] << ',';
        ++i;

        if (i % PER_LINE == 0 || i == STEP_COUNT)
            f << std::endl;
    }

    f << "};" << std::endl;
}

