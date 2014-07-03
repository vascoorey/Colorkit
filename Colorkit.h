//
//  Colorkit.h
//
//  Created by Pierre Boumal
//  The MIT Licence (MIT)
//  Copyright (c) 2014 Pierre Boumal pixelslip@gmail.com
//

#import <UIKit/UIKit.h>

@interface UIColor (Colorkit)

#pragma mark - Enum
// Color Blending Enum
typedef NS_ENUM(NSInteger, ColorBlend) {
    ColorBlendMultiply,
    ColorBlendScreen,
    ColorBlendOverlay,
    ColorBlendSoftlight,
    ColorBlendHardlight,
    ColorBlendDifference,
    ColorBlendExclusion
};

#pragma mark - Class methods
/**
 Create a color with a HEX String
 
 @param hexString Hex String like @"#3355AA" or @"3355AA"
 @return UIColor
 */
+(instancetype)colorWithHexString:(NSString *)hexString;

/**
 Create a color with a HEX String with an alpha value
 
 @param hexString Hex String like @"#3355AA" or @"3355AA"
 @param alpha Float value for alpha(0-1)
 @return UIColor
 */
+(instancetype)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/**
 Create a color with an array of rgb values like @[@255,@20,@43]
 
 @param rgbArray Array of 3 numbers red(0-255) green(0-255) blue(0-255)
 @return UIColor
 */
+(instancetype)colorWithRGB:(NSArray *)rgbArray;

/**
 Create a color with an array of rgba values like @[@255,@120,@43,@0.5]
 
 @param rgbaArray Array of 4 numbers red(0-255) green(0-255) blue(0-255) alpha(0-1)
 @return UIColor
 */
+(instancetype)colorWithRGBA:(NSArray *)rgbaArray;

/**
 Create a color with an array of hsb values like @[@360,@80,@54]
 
 @param hsbArray Array of 3 numbers hue(0-360) saturation(0-100) brightness(0-100)
 @return UIColor
 */
+(instancetype)colorWithHSB:(NSArray *)hsbArray;

/**
 Create a color with an array of hsba values like @[@360,@80,@54,@0.5]
 
 @param hsbaArray Array of 4 numbers hue(0-360) saturation(0-100) brightness(0-100) alpha(0-1)
 @return UIColor
 */
+(instancetype)colorWithHSBA:(NSArray *)hsbaArray;


#pragma mark - Color channel functions
/**
 Get a HEX String from a Color
 
 @return NSString
 */
@property (nonatomic, readonly) NSString *hexString;

/**
 Get an Array of RGBA Numbers from a Color
 
 @return NSArray red(0-255) green(0-255) blue(0-255) alpha(0-1)
 */
@property (nonatomic, readonly) NSArray *rgbaArray;

/**
 Get an Array of HSBA Numbers from a Color
 
 @return NSArray hue(0-360) saturation(0-100) brightness(0-100) alpha(0-1)
 */
@property (nonatomic, readonly) NSArray *hsbaArray;

/**
 Get the red value of a Color
 
 @return CGFloat (0-255)
 */
@property (nonatomic, readonly) CGFloat red;

/**
 Get the green value of a Color
 
 @return CGFloat (0-255)
 */
@property (nonatomic, readonly) CGFloat green;

/**
 Get the blue value of a Color
 
 @return CGFloat (0-255)
 */
@property (nonatomic, readonly) CGFloat blue;

/**
 Get the hue value of a Color
 
 @return CGFloat (0-360)
 */
@property (nonatomic, readonly) CGFloat hue;

/**
 Get the saturation value of a Color
 
 @return CGFloat (0-100)
 */
@property (nonatomic, readonly) CGFloat saturation;

/**
 Get the brightness value of a Color
 
 @return CGFloat (0-100)
 */
@property (nonatomic, readonly) CGFloat brightness;

/**
 Get the alpha value of a Color
 
 @return CGFloat (0-1)
 */
@property (nonatomic, readonly) CGFloat alpha;


#pragma mark - Color operation functions
/**
 Saturate a color with a pourcentage value
 
 @param amount float value (0-100)
 @return UIColor
 */
-(instancetype)saturateColor:(CGFloat)amount;

/**
 Desaturate a color with a pourcentage value (0-1)
 
 @param amount float value (0-100)
 @return UIColor
 */
-(instancetype)desaturateColor:(CGFloat)amount;

/**
 Light a color with a pourcentage value
 
 @param amount float value (0-100)
 @return UIColor
 */
-(instancetype)lightenColor:(CGFloat)amount;

/**
 Saturate a color with a pourcentage value
 
 @param amount float value (0-100)
 @return UIColor
 */
-(instancetype)darkenColor:(CGFloat)amount;

/**
 Spin a color with a degre value
 
 @param angle float value (0-360)
 @return UIColor
 */
-(instancetype)spinColor:(CGFloat)angle;

/**
 Return the color desaturate. Same as desaturateColor:100
 
 @return UIColor
 */
-(instancetype)greyscaleColor;

#pragma mark - Color blending functions

/**
 Blending two colors with Multiply
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithMultiply:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Screen
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithScreen:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Overlay
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithOverlay:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Softlight
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithSoftlight:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Hardlight
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithHardlight:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Difference
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithDifference:(UIColor *)firstColor secondColor:(UIColor *)secondColor;

/**
 Blending two colors with Exclusion
 
 @param firstColor UIColor
 @param secondColor UIColor
 @return UIColor
 */
+(instancetype)blendingColorsWithExclusion:(UIColor *)firstColor secondColor:(UIColor *)secondColor;


@end
