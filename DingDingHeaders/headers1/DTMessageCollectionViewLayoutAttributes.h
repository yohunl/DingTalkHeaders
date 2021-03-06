//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface DTMessageCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _needShowInMiddle;
    _Bool _needOAHeader;
    _Bool _needShowTagView;
    double _selectWidth;
    double _messageBubbleLeftRightMargin;
    double _avatarSpace;
    double _dingSpace;
    double _dingAddtionalConfirm;
    double _bubbleAttachmentLeftRightMargin;
    double _cellTopLabelHeight;
    double _cellNameViewHeight;
    double _cellBottomLabelHeight;
    double _cellTimesTampViewHeight;
    double _cellNewMessageAnchorViewHeight;
    double _cellSafeMessageAnchorViewHeight;
    double _bubbleTextAttachmentDingLeftRightMargin;
    double _bubbleTextAttachmentMinWidth;
    double _bubbleNoAvatarAttachmentLeftRightMargin;
    double _bubbleNoAvatarTagViewLeftRightMargin;
    struct CGSize _messageBubbleSize;
    struct CGSize _avatarViewSize;
    struct CGSize _messageAudioSize;
    struct CGSize _messageTagViewSize;
    struct CGSize _messageSourceTagViewSize;
}

@property(nonatomic) struct CGSize messageSourceTagViewSize; // @synthesize messageSourceTagViewSize=_messageSourceTagViewSize;
@property(nonatomic) double bubbleNoAvatarTagViewLeftRightMargin; // @synthesize bubbleNoAvatarTagViewLeftRightMargin=_bubbleNoAvatarTagViewLeftRightMargin;
@property(nonatomic) _Bool needShowTagView; // @synthesize needShowTagView=_needShowTagView;
@property(nonatomic) struct CGSize messageTagViewSize; // @synthesize messageTagViewSize=_messageTagViewSize;
@property(nonatomic) double bubbleNoAvatarAttachmentLeftRightMargin; // @synthesize bubbleNoAvatarAttachmentLeftRightMargin=_bubbleNoAvatarAttachmentLeftRightMargin;
@property(nonatomic) _Bool needOAHeader; // @synthesize needOAHeader=_needOAHeader;
@property(nonatomic) struct CGSize messageAudioSize; // @synthesize messageAudioSize=_messageAudioSize;
@property(nonatomic) double bubbleTextAttachmentMinWidth; // @synthesize bubbleTextAttachmentMinWidth=_bubbleTextAttachmentMinWidth;
@property(nonatomic) double bubbleTextAttachmentDingLeftRightMargin; // @synthesize bubbleTextAttachmentDingLeftRightMargin=_bubbleTextAttachmentDingLeftRightMargin;
@property(nonatomic) double cellSafeMessageAnchorViewHeight; // @synthesize cellSafeMessageAnchorViewHeight=_cellSafeMessageAnchorViewHeight;
@property(nonatomic) double cellNewMessageAnchorViewHeight; // @synthesize cellNewMessageAnchorViewHeight=_cellNewMessageAnchorViewHeight;
@property(nonatomic) double cellTimesTampViewHeight; // @synthesize cellTimesTampViewHeight=_cellTimesTampViewHeight;
@property(nonatomic) double cellBottomLabelHeight; // @synthesize cellBottomLabelHeight=_cellBottomLabelHeight;
@property(nonatomic) double cellNameViewHeight; // @synthesize cellNameViewHeight=_cellNameViewHeight;
@property(nonatomic) double cellTopLabelHeight; // @synthesize cellTopLabelHeight=_cellTopLabelHeight;
@property(nonatomic) _Bool needShowInMiddle; // @synthesize needShowInMiddle=_needShowInMiddle;
@property(nonatomic) struct CGSize avatarViewSize; // @synthesize avatarViewSize=_avatarViewSize;
@property(nonatomic) double bubbleAttachmentLeftRightMargin; // @synthesize bubbleAttachmentLeftRightMargin=_bubbleAttachmentLeftRightMargin;
@property(nonatomic) double dingAddtionalConfirm; // @synthesize dingAddtionalConfirm=_dingAddtionalConfirm;
@property(nonatomic) double dingSpace; // @synthesize dingSpace=_dingSpace;
@property(nonatomic) double avatarSpace; // @synthesize avatarSpace=_avatarSpace;
@property(nonatomic) double messageBubbleLeftRightMargin; // @synthesize messageBubbleLeftRightMargin=_messageBubbleLeftRightMargin;
@property(nonatomic) struct CGSize messageBubbleSize; // @synthesize messageBubbleSize=_messageBubbleSize;
@property(nonatomic) double selectWidth; // @synthesize selectWidth=_selectWidth;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

