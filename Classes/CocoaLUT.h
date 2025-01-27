
#include <TargetConditionals.h>

#import <CoreImage/CoreImage.h>

#define TICK   NSDate *startTime = [NSDate date]
#define TOCK   NSLog(@"%s Time: %f", __func__, -[startTime timeIntervalSinceNow])

#ifndef _COCOALUT_

    #define _COCOALUT_

    #define COCOALUT_SUGGESTED_MAX_LUT1D_SIZE 65536
    #define COCOALUT_SUGGESTED_MAX_LUT3D_SIZE 64

    #define COCOALUT_MAX_CICOLORCUBE_SIZE 64
    #define COCOALUT_MAX_VVLUT1DFILTER_SIZE 65536

    #import "LUTHelper.h"
    #import "LUT.h"
    #import "LUT1D.h"
    #import "LUT3D.h"
    #import "LUTColor.h"
    #import "LUTColorSpace.h"
    #import "LUTColorTransferFunction.h"

#endif

