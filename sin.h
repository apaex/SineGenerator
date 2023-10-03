#pragma once

#define STEP_COUNT  250
#define PULSE_PER_STEP 576

const unsigned int arr_pwm[STEP_COUNT] = 
{
	0,7,14,22,29,36,43,51,
	58,65,72,79,87,94,101,108,
	115,122,129,136,143,150,157,164,
	171,178,185,192,199,205,212,219,
	225,232,239,245,252,258,265,271,
	277,284,290,296,303,309,315,321,
	327,333,339,344,350,356,362,367,
	373,378,384,389,394,400,405,410,
	415,420,425,430,434,439,444,448,
	453,457,462,466,470,474,478,482,
	486,490,494,498,501,505,508,512,
	515,518,521,524,527,530,533,536,
	538,541,543,546,548,550,552,554,
	556,558,560,561,563,564,566,567,
	568,569,571,571,572,573,574,574,
	575,575,576,576,576,576,576,576,
	576,575,575,574,574,573,572,571,
	571,569,568,567,566,564,563,561,
	560,558,556,554,552,550,548,546,
	543,541,538,536,533,530,527,524,
	521,518,515,512,508,505,501,498,
	494,490,486,482,478,474,470,466,
	462,457,453,448,444,439,434,430,
	425,420,415,410,405,400,394,389,
	384,378,373,367,362,356,350,344,
	339,333,327,321,315,309,303,296,
	290,284,277,271,265,258,252,245,
	239,232,225,219,212,205,199,192,
	185,178,171,164,157,150,143,136,
	129,122,115,108,101,94,87,79,
	72,65,58,51,43,36,29,22,
	14,7,
};