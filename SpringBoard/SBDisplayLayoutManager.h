/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBDisplayLayout;

@interface SBDisplayLayoutManager : NSObject {

	SBDisplayLayout* _activeLayout;

}

@property (nonatomic,retain) SBDisplayLayout * activeLayout;              //@synthesize activeLayout=_activeLayout - In the implementation block
+(id)sharedInstance;
-(SBDisplayLayout *)activeLayout;
-(void)setActiveLayout:(SBDisplayLayout *)arg1 ;
-(id)init;
@end

