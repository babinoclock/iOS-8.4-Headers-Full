/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, NSString;

@interface SBGestureViewCacheNode : NSObject {

	UIView* m_view;
	int m_viewType;
	NSString* m_contextHostViewRequester;
	int m_orientation;
	NSString* m_bundleIdentifier;
	char m_includesStatusBar;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int viewType; 
@property (nonatomic,copy) NSString * contextHostViewRequester; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) char includesStatusBar; 
+(id)node;
-(void)setContextHostViewRequester:(NSString *)arg1 ;
-(void)setViewType:(int)arg1 ;
-(NSString *)contextHostViewRequester;
-(char)includesStatusBar;
-(void)setIncludesStatusBar:(char)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(NSString *)bundleIdentifier;
-(int)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)viewType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

