//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray;

@interface DTSingleCalleeStatusAnimationView : UIView
{
    _Bool _animation;
    NSMutableArray *_animationKeys;
    CALayer *_backLayer;
    NSMutableArray *_randomCount;
}

@property(nonatomic, getter=isAnimation) _Bool animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSMutableArray *randomCount; // @synthesize randomCount=_randomCount;
@property(retain, nonatomic) CALayer *backLayer; // @synthesize backLayer=_backLayer;
@property(retain, nonatomic) NSMutableArray *animationKeys; // @synthesize animationKeys=_animationKeys;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (id)pathWithStyle:(id)arg1 center_x:(double)arg2 center_y:(double)arg3 radius:(double)arg4 pointsArray:(id)arg5;
- (id)getPointsByCenter_x:(double)arg1 center_y:(double)arg2 radius:(double)arg3 count:(long long)arg4;
- (id)getSignalLayerByRadius:(double)arg1 center_x:(double)arg2 center_y:(double)arg3;
- (id)getSignalLayerCircles:(int)arg1 minRadius:(double)arg2;
- (id)getSmallCircleByPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)doAnimation;
- (void)loadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
