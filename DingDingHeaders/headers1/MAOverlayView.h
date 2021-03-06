//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MAOverlayDrawable-Protocol.h"

@class MAOverlayContainerView, NSString;
@protocol MAOverlay;

@interface MAOverlayView : UIView <MAOverlayDrawable>
{
    MAOverlayContainerView *_overlayRender;
    id <MAOverlay> _overlay;
    double _alpha;
}

@property(retain, nonatomic) id <MAOverlay> overlay; // @synthesize overlay=_overlay;
@property(nonatomic) MAOverlayContainerView *overlayRender; // @synthesize overlayRender=_overlayRender;
- (void).cxx_destruct;
@property(readonly) double contentScaleFactor;
@property double alpha; // @synthesize alpha=_alpha;
- (id)initWithOverlay:(id)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1;
- (void)setNeedsDisplay;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (_Bool)respondsToDrawMapRect;
@property(nonatomic) MAOverlayContainerView *render;
- (CDStruct_90e2a262)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

