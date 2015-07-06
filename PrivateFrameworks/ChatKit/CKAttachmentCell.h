/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol CKAttachmentCellDelegate;
@class UIImageView, NSObject, CKAttachmentItem;

@interface CKAttachmentCell : UICollectionViewCell {

	char _editing;
	UIImageView* _checkmarkView;
	NSObject*<CKAttachmentCellDelegate> _delegate;
	CKAttachmentItem* _representedObject;

}

@property (nonatomic,retain) UIImageView * checkmarkView;                               //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic) NSObject*<CKAttachmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * representedObject;                      //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                             //@synthesize editing=_editing - In the implementation block
-(void)dealloc;
-(void)setDelegate:(NSObject*<CKAttachmentCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSObject*<CKAttachmentCellDelegate>)delegate;
-(char)isEditing;
-(void)setSelected:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(CKAttachmentItem *)representedObject;
-(void)setRepresentedObject:(CKAttachmentItem *)arg1 ;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
@end

