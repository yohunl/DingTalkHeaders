//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface QPRecordTipGuideView : UIView
{
}

- (void)removeAllGuideView;
- (void)addSendGuideInPoint:(struct CGPoint)arg1;
- (void)addDurationGuideInPoint:(struct CGPoint)arg1;
- (void)addDeleteTrashGuideInPoint:(struct CGRect)arg1;
- (void)addDeleteGuideInPoint:(struct CGRect)arg1;
- (void)addImportGuideInPoint:(struct CGRect)arg1;
- (void)addSkinGuideInPoint:(struct CGRect)arg1;
- (double)arrowOffsetX:(double)arg1 atWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
