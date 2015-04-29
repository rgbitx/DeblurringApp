/*
 * BrightContrastFilter.h
 *
 */

#ifndef BRIGHTCONTRASTFILTER_H_
#define BRIGHTCONTRASTFILTER_H_

#include "ImageFilter.h"


class BrightContrastFilter : public ImageFilter {
public:
	BrightContrastFilter(int *pixels, int width, int height);
	int* procImage();
	int* setBrightness(double brightness);
	int* setContrast(double contrast);
};



#endif /* BRIGHTCONTRASTFILTER_H_ */
