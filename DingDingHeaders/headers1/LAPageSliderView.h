//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIScreenEdgePanGestureRecognizer;
@protocol LAPageSliderViewDelegate;

@interface LAPageSliderView : UIView <UIGestureRecognizerDelegate>
{
    id <LAPageSliderViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_backMirrorView;
    UIView *_maskView;
    UIScreenEdgePanGestureRecognizer *_edgePanGestureRecongnizer;
}

@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePanGestureRecongnizer; // @synthesize edgePanGestureRecongnizer=_edgePanGestureRecongnizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *backMirrorView; // @synthesize backMirrorView=_backMirrorView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <LAPageSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)edgeLeftPanDetected:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setPageMirrorViewWithView:(id)arg1;
- (void)setPageMirrorViewWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

