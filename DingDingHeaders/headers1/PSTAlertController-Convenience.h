//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTAlertController.h"

@class UITextField;

@interface PSTAlertController (Convenience)
+ (id)presentDismissableAlertWithTitle:(id)arg1 error:(id)arg2 controller:(id)arg3;
+ (id)presentDismissableAlertWithTitle:(id)arg1 message:(id)arg2 controller:(id)arg3;
+ (id)actionSheetWithTitle:(id)arg1;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCancelActionWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) UITextField *textField;
@end

