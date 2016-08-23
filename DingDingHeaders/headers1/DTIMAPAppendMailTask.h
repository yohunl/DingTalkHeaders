//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLMail, DTIMAPAccount, NSString;

@interface DTIMAPAppendMailTask : BLBaseAPITask
{
    NSString *_mailUUIDToSend;
    DTIMAPAccount *_imapAccount;
    BLMail *_mailToSend;
}

@property(retain, nonatomic) BLMail *mailToSend; // @synthesize mailToSend=_mailToSend;
@property(retain, nonatomic) DTIMAPAccount *imapAccount; // @synthesize imapAccount=_imapAccount;
@property(copy, nonatomic) NSString *mailUUIDToSend; // @synthesize mailUUIDToSend=_mailUUIDToSend;
- (void).cxx_destruct;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)appendMail;
- (void)process;
- (_Bool)isMailExist;

@end
