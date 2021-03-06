/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinListSubsection : NSObject {

	char _showsInLockScreen;
	char _showsMessagePreview;
	NSString* _subsectionID;

}

@property (nonatomic,readonly) NSString * subsectionID;              //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) char showsInLockScreen;                 //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) char showsMessagePreview;               //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
-(id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2 ;
-(void)dealloc;
-(char)showsMessagePreview;
-(void)setShowsMessagePreview:(char)arg1 ;
-(char)showsInLockScreen;
-(void)setShowsInLockScreen:(char)arg1 ;
-(NSString *)subsectionID;
@end

