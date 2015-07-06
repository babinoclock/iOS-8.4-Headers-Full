/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <RemoteUI/RUIWebContainerViewDelegate.h>
#import <RemoteUI/RemoteUITableHeader.h>

@protocol RUITableHeaderDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RemoteUITableHeader> {

	RUIWebContainerView* _webContainerView;
	char _isFirstSection;
	id<RUITableHeaderDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUITableHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                         //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RUITableHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RUITableHeaderDelegate>)delegate;
-(NSURL *)baseURL;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSectionIsFirst:(char)arg1 ;
-(float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 ;
@end
