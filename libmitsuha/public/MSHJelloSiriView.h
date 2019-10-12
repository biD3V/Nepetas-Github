#import <UIKit/UIKit.h>
#import "MSHView.h"
#import "MSHJelloLayer.h"

@interface MSHJelloSiriView : MSHView

@property (nonatomic, strong) MSHJelloLayer *waveLayer;
@property (nonatomic, strong) MSHJelloLayer *subwaveLayer;
@property (nonatomic, strong) MSHJelloLayer *subSubwaveLayer;

-(CGPathRef)createPathWithPoints:(CGPoint *)points pointCount:(NSUInteger)pointCount inRect:(CGRect)rect;

@end
