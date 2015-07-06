/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <MediaSocial/MSCLTokenTextViewDelegate.h>

@protocol MSCLAttachmentPropertiesTableViewSectionDelegate;
@class SKUIClientContext, NSArray, MSCLVideoCoverImageSelectionView, UIImage, NSString;

@interface MSCLAttachmentPropertiesTableViewSection : NSObject <UITextFieldDelegate, MSCLTokenTextViewDelegate> {

	SKUIClientContext* _clientContext;
	float _sectionHeaderHeight;
	int _sectionType;
	NSArray* _tableViewCells;
	MSCLVideoCoverImageSelectionView* _videoCoverImageView;
	id<MSCLAttachmentPropertiesTableViewSectionDelegate> _sectionDelegate;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLAttachmentPropertiesTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (nonatomic,readonly) int sectionType;                                                                        //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) float sectionHeaderHeight;                                                              //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) UIImage * selectedCoverImage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)sectionType;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)resignFirstResponder;
-(float)sectionHeaderHeight;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)initWithSectionType:(int)arg1 clientContext:(id)arg2 ;
-(void)setTableCellsWithAttachment:(id)arg1 configuration:(id)arg2 ;
-(void)setSectionDelegate:(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)arg1 ;
-(id)tokenTextViewForRowAtIndexPath:(id)arg1 ;
-(int)numberOfRowsInTableView:(id)arg1 ;
-(UIImage *)selectedCoverImage;
-(void)commitValuesToAttachment:(id)arg1 ;
-(void)setCoverImage:(id)arg1 ;
-(void)textView:(id)arg1 didChange:(int)arg2 ;
-(id)_newTextFieldCellWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 ;
-(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)sectionDelegate;
-(id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 ;
-(id)_newTableViewCellWithContentView:(id)arg1 ;
-(SKUIClientContext *)clientContext;
@end

