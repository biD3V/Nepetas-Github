#import <UIKit/UIKit.h>
#import "MSHView.h"
#import "MSHJelloLayer.h"

@interface MSHSiriView : MSHView

@property (nonatomic, strong) MSHJelloLayer *waveLayer;
@property (nonatomic, strong) MSHJelloLayer *rWaveLayer;
@property (nonatomic, strong) MSHJelloLayer *subwaveLayer;
@property (nonatomic, strong) MSHJelloLayer *rSubwaveLayer;
@property (nonatomic, strong) MSHJelloLayer *subSubwaveLayer;
@property (nonatomic, strong) MSHJelloLayer *rSubSubwaveLayer;

-(CGPathRef)createPathWithPoints:(CGPoint *)points pointCount:(NSUInteger)pointCount inRect:(CGRect)rect;

@end
