//############################################################################

//  Author:	Sharjith Nair
//  Email:	sharjith_ssn@hotmail.com

// Program:	OpenGL, C++ QT Surface Modeler Demo Application

//							Important Notice:

//	This Idea and the Application is Copyright(c) Sharjith Nair 2002, 2003.
//	You can freely use it as long as you credit me for it.

//	No guarantee/warranty is given on this app and I will not be responsible 
//	for any damage to you, your property or any other person from using it.
//	USE IT ON YOUR OWN RISK.

//	Thankyou
//	Sharjith Nair.

//#############################################################################

#ifndef __GLMATERIAL_H__
#define __GLMATERIAL_H__

static float Default[] = {
	1.000000/2, 0.718750/2, 0.441406/2, 1.000000,
    0.300000, 0.300000, 0.300000, 1.000000,
    1.000000, 1.000000, 1.000000, 1.000000,
    64
};

static float Aluminium[] = {
	0.250000, 0.250000, 0.250000, 1.000000,
    0.400000, 0.400000, 0.400000, 1.000000,
    0.5774597, 0.5774597, 0.5774597, 1.000000,
    25.800003
};

static float Brass[] = {
    0.329412, 0.223529, 0.027451, 1.000000,
    0.780392, 0.568627, 0.113725, 1.000000,
    0.992157, 0.941176, 0.807843, 1.000000,
    27.897400
};

static float Bronze[] = {
    0.212500, 0.127500, 0.054000, 1.000000,
    0.714000, 0.428400, 0.181440, 1.000000,
    0.393548, 0.271906, 0.166721, 1.000000,
    25.600000
};

static float Polished_Bronze[] = {
    0.250000, 0.148000, 0.064750, 1.000000,
    0.400000, 0.236800, 0.103600, 1.000000,
    0.774597, 0.458561, 0.200621, 1.000000,
    76.800003
};

static float Chrome[] = {
    0.250000, 0.250000, 0.250000, 1.000000,
    0.400000, 0.400000, 0.400000, 1.000000,
    0.774597, 0.774597, 0.774597, 1.000000,
    76.800003
};

static float Copper[] = {
    0.191250, 0.073500, 0.022500, 1.000000,
    0.703800, 0.270480, 0.082800, 1.000000,
    0.256777, 0.137622, 0.086014, 1.000000,
    12.800000
};

static float Polished_Copper[] = {
    0.229500, 0.088250, 0.027500, 1.000000,
    0.550800, 0.211800, 0.066000, 1.000000,
    0.580594, 0.223257, 0.069570, 1.000000,
    51.200001
};

static float Gold[] = {
    0.247250, 0.199500, 0.074500, 1.000000,
    0.751640, 0.606480, 0.226480, 1.000000,
    0.628281, 0.555802, 0.366065, 1.000000,
    51.200001
};

static float Polished_Gold[] = {
    0.247250, 0.224500, 0.064500, 1.000000,
    0.346150, 0.314300, 0.090300, 1.000000,
    0.797357, 0.723991, 0.208006, 1.000000,
    83.199997
};

static float Pewter[] = {
    0.105882, 0.058824, 0.113725, 1.000000,
    0.427451, 0.470588, 0.541176, 1.000000,
    0.333333, 0.333333, 0.521569, 1.000000,
    9.846150
};

static float Silver[] = {
    0.192250, 0.192250, 0.192250, 1.000000,
    0.507540, 0.507540, 0.507540, 1.000000,
    0.508273, 0.508273, 0.508273, 1.000000,
    51.200001
};

static float Polished_Silver[] = {
    0.231250, 0.231250, 0.231250, 1.000000,
    0.277500, 0.277500, 0.277500, 1.000000,
    0.773911, 0.773911, 0.773911, 1.000000,
    89.599998
};

static float Steel[] = {
    0.231250, 0.231250, 0.231250, 1.000000,
    0.277500, 0.277500, 0.277500, 1.000000,
    0.773911, 0.773911, 0.773911, 1.000000,
    40.599998
};

static float Emerald[] = {
    0.021500, 0.174500, 0.021500, 0.550000,
    0.075680, 0.614240, 0.075680, 0.550000,
    0.633000, 0.727811, 0.633000, 0.550000,
    76.800003
};

static float Jade[] = {
    0.135000, 0.222500, 0.157500, 0.950000,
    0.540000, 0.890000, 0.630000, 0.950000,
    0.316228, 0.316228, 0.316228, 0.950000,
    12.800000
};

static float Obsidian[] = {
    0.053750, 0.050000, 0.066250, 0.820000,
    0.182750, 0.170000, 0.225250, 0.820000,
    0.332741, 0.328634, 0.346435, 0.820000,
    38.400002
};

static float Pearl[] = {
    0.250000, 0.207250, 0.207250, 0.922000,
    1.000000, 0.829000, 0.829000, 0.922000,
    0.296648, 0.296648, 0.296648, 0.922000,
    11.264000
};

static float Ruby[] = {
    0.174500, 0.011750, 0.011750, 0.550000,
    0.614240, 0.041360, 0.041360, 0.550000,
    0.727811, 0.626959, 0.626959, 0.550000,
    76.800003
};

static float Turquoise[] = {
    0.100000, 0.187250, 0.174500, 0.800000,
    0.396000, 0.741510, 0.691020, 0.800000,
    0.297254, 0.308290, 0.306678, 0.800000,
    12.800000
};

static float Black_Plastic[] = {
    0.000000, 0.000000, 0.000000, 1.000000,
    0.010000, 0.010000, 0.010000, 1.000000,
    0.500000, 0.500000, 0.500000, 1.000000,
    32.000000

};

static float Black_Rubber[] = {
    0.020000, 0.020000, 0.020000, 1.000000,
    0.010000, 0.010000, 0.010000, 1.000000,
    0.400000, 0.400000, 0.400000, 1.000000,
    10.000000
};

static float None[] = {
    0.00000, 0.00000, 0.00000, 0.000000,
    0.00000, 0.00000, 0.00000, 0.000000,
    0.00000, 0.00000, 0.00000, 0.000000,
    0.000000
};

#endif
