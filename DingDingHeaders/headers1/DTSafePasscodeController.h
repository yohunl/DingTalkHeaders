//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BKPasscodeInputViewDelegate-Protocol.h"

@class AFViewShaker, BKShiftingView, NSString, UIWindow;

@interface DTSafePasscodeController : DTViewController <BKPasscodeInputViewDelegate>
{
    _Bool _disableManage;
    _Bool _disableTouchID;
    _Bool _isSuccess;
    unsigned long long _type;
    unsigned long long _purpose;
    CDUnknownBlockType _dismissBlock;
    BKShiftingView *_shiftingView;
    unsigned long long _currentState;
    NSString *_oldPasscode;
    NSString *_theNewPasscode;
    double _keyboardHeight;
    AFViewShaker *_viewShaker;
    UIWindow *_maskWindow;
}

+ (void)setCurrentFailedCount:(long long)arg1;
+ (long long)currentFailedCount;
@property(retain, nonatomic) UIWindow *maskWindow; // @synthesize maskWindow=_maskWindow;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(retain, nonatomic) AFViewShaker *viewShaker; // @synthesize viewShaker=_viewShaker;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSString *theNewPasscode; // @synthesize theNewPasscode=_theNewPasscode;
@property(retain, nonatomic) NSString *oldPasscode; // @synthesize oldPasscode=_oldPasscode;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) BKShiftingView *shiftingView; // @synthesize shiftingView=_shiftingView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool disableTouchID; // @synthesize disableTouchID=_disableTouchID;
@property(nonatomic) _Bool disableManage; // @synthesize disableManage=_disableManage;
@property(nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)arg1;
- (void)didReceiveKeyboardWillShowHideNotification:(id)arg1;
- (void)passcodeInputViewDidFinish:(id)arg1;
- (void)showFailedAttemptsCount:(long long)arg1 inputView:(id)arg2;
- (void)updatePasscodeInputViewTitle:(id)arg1;
- (_Bool)lockIfNeeded;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)arg1;
- (unsigned long long)passcodeStyle;
- (void)setPasscodeStyle:(unsigned long long)arg1;
- (void)startTouchIDAuthenticationIfPossible;
- (_Bool)hasEnableFingerprint;
- (void)updateEncryptedCodeAndClose:(id)arg1;
- (void)reLogin;
- (void)showInExclusiveWindow;
- (void)managePasscode;
- (void)dismissAfterDelay:(double)arg1;
- (void)dismissPasscodeVC;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)titleForCurrentType;
- (id)instantiatePasscodeInputView;
- (id)passcodeInputView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

