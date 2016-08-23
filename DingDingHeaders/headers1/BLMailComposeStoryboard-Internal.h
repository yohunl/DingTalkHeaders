//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLMailComposeStoryboard.h"

#import "BLMailStoryboardRoutable-Protocol.h"

@class NSString;

@interface BLMailComposeStoryboard (Internal) <BLMailStoryboardRoutable>
- (void)gotoDentryViewerWithData:(id)arg1 srcAccount:(id)arg2;
- (void)gotoFileBrowserToViewAttachment:(id)arg1 inMail:(id)arg2;
- (void)gotoPhotoBrowserWithDataSource:(id)arg1;
- (void)dismissMailComposeInterface;
- (void)openContactChooserFromComposeInterface:(id)arg1 withSelectedContact:(id)arg2;
- (void)openCloudDiskFromComposeInterface:(id)arg1;
- (void)openCameraFromComposeInterface:(id)arg1;
- (void)openPhotoLibraryFromComposeInterface:(id)arg1;
- (id)createComposeModuleWithInterface:(id)arg1 andViewData:(id)arg2 forAccount:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
