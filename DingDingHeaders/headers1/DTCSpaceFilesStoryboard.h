//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DTFileBasedInterfaceRouteDelegate;

@interface DTCSpaceFilesStoryboard : NSObject
{
    id <DTFileBasedInterfaceRouteDelegate> _routeHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <DTFileBasedInterfaceRouteDelegate> routeHandler; // @synthesize routeHandler=_routeHandler;
- (void).cxx_destruct;
- (id)dentryPageForSimpleModel:(id)arg1 withBizDentry:(id)arg2 space:(id)arg3 account:(id)arg4 customActions:(unsigned long long)arg5 withActionHandler:(id)arg6 routeDelegate:(id)arg7;
- (id)gotoCSpaceFilesSubPickerList:(id)arg1 withPickerDelegate:(id)arg2 withAccount:(id)arg3 withSpaceEntry:(id)arg4 withFolderDentry:(id)arg5 withUsage:(unsigned long long)arg6 withExtraInfo:(id)arg7;
- (id)dentryInterfaceForChooserInSpace:(id)arg1 withSpaceId:(id)arg2 account:(id)arg3 config:(id)arg4 withDelegate:(id)arg5;
- (_Bool)canOperateFile:(id)arg1 withAccessType:(unsigned long long)arg2;
- (unsigned long long)getOperateActions:(id)arg1 accessType:(unsigned long long)arg2;
- (id)openDentryDetail:(id)arg1 withAccount:(id)arg2 withExtraInfo:(id)arg3 withSpaceEntry:(id)arg4 withDataSource:(id)arg5 withActionHandler:(id)arg6 andAccessType:(unsigned long long)arg7;
- (id)gotoCSpaceFilesListViewController:(id)arg1 extraInfo:(id)arg2 withOrganization:(id)arg3 withAccount:(id)arg4 withSpaceEntry:(id)arg5 withSpaceId:(id)arg6;

@end
