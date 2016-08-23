//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTMailCellView, NSArray, NSIndexPath, NSString;
@protocol BLMailCellDelegate;

@interface DTMailCell : SWTableViewCell <UIGestureRecognizerDelegate>
{
    _Bool _hasLeftSwipe;
    _Bool _isSelectMode;
    _Bool _igonreStarButton;
    id _mailObject;
    DTMailCellView *_mailCellView;
    NSIndexPath *_indexPath;
    id <BLMailCellDelegate> _mailCellDelegate;
    NSArray *_rightUtilityButtonsWithStar;
    NSArray *_rightUtilityButtonsWithGrayStar;
    NSArray *_rightUtilityButtonsWithDelete;
}

+ (double)cellHeight:(id)arg1 account:(id)arg2 folderType:(long long)arg3 ignoreMailReceiverStatus:(_Bool)arg4;
@property(retain, nonatomic) NSArray *rightUtilityButtonsWithDelete; // @synthesize rightUtilityButtonsWithDelete=_rightUtilityButtonsWithDelete;
@property(retain, nonatomic) NSArray *rightUtilityButtonsWithGrayStar; // @synthesize rightUtilityButtonsWithGrayStar=_rightUtilityButtonsWithGrayStar;
@property(retain, nonatomic) NSArray *rightUtilityButtonsWithStar; // @synthesize rightUtilityButtonsWithStar=_rightUtilityButtonsWithStar;
@property(nonatomic) _Bool igonreStarButton; // @synthesize igonreStarButton=_igonreStarButton;
@property(nonatomic) _Bool isSelectMode; // @synthesize isSelectMode=_isSelectMode;
@property(nonatomic) _Bool hasLeftSwipe; // @synthesize hasLeftSwipe=_hasLeftSwipe;
@property(nonatomic) __weak id <BLMailCellDelegate> mailCellDelegate; // @synthesize mailCellDelegate=_mailCellDelegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) DTMailCellView *mailCellView; // @synthesize mailCellView=_mailCellView;
@property(retain, nonatomic) id mailObject; // @synthesize mailObject=_mailObject;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configCellLeftSwipe:(id)arg1;
- (void)resetCellLeftSwipe;
- (void)configCellSwipe;
- (void)configCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
