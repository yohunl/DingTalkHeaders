//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@interface PSTExtendedAlertController : UIAlertController
{
    CDUnknownBlockType _viewWillDisappearBlock;
    CDUnknownBlockType _viewDidDisappearBlock;
}

@property(copy, nonatomic) CDUnknownBlockType viewDidDisappearBlock; // @synthesize viewDidDisappearBlock=_viewDidDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType viewWillDisappearBlock; // @synthesize viewWillDisappearBlock=_viewWillDisappearBlock;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end
