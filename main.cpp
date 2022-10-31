#define STEP_COUNT 500         //  разложение 320 * 500 * 2 = 16МГц / 50Гц.
#define PULSE_PER_STEP (160000/STEP_COUNT)
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
        arr_pwm[i] = lroundl(sin(angle) * PULSE_PER_STEP);
        angle += d;
    }

    std::ofstream f("sin.h");

    f << "#pragma once" << std::endl;
    f << std::endl;
    f << "const uint16_t arr_pwm[STEP_COUNT] = " << std::endl;
    f << "{" << std::endl;
    for (int i = 0; i < STEP_COUNT;  )
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

