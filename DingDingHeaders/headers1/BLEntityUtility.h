//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLEntityUtility : NSObject
{
}

+ (void)rebuildAllReadStatus:(id)arg1 account:(id)arg2;
+ (void)rebuildAllReadStatus:(id)arg1 account:(id)arg2 includeSourceFolder:(_Bool)arg3;
+ (void)rebuildMailRelationship:(id)arg1 account:(id)arg2;
+ (void)rebuildMailRelationship:(id)arg1 account:(id)arg2 includeSourceFolder:(_Bool)arg3;
+ (id)convertToSenderNames:(id)arg1;
+ (id)rebuildSession:(id)arg1 withAction:(long long)arg2 forAccount:(id)arg3;
+ (id)cleanAllSessionPropertiesForMail:(id)arg1;
+ (long long)underFolderAction:(long long)arg1;
+ (long long)crossFolderAction:(long long)arg1;
+ (void)rebuildMails:(id)arg1 account:(id)arg2 includeSourceFolder:(_Bool)arg3 actions:(long long)arg4;
+ (id)generateUniqueSesssionIds:(id)arg1;

@end

