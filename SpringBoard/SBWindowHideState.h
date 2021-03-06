/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:15:00 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBWindowHideState : NSObject {

	char _hidden;
	float _desiredAlpha;

}

@property (getter=isHidden) char hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) float desiredAlpha;                //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(float)desiredAlpha;
-(void)setDesiredAlpha:(float)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)description;
@end

