/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconModelStore <NSObject>
@required
-(id)loadDesiredIconState:(id*)arg1;
-(id)loadCurrentIconState:(id*)arg1;
-(char)deleteDesiredIconState:(id*)arg1;
-(char)deleteCurrentIconState:(id*)arg1;
-(char)saveDesiredIconState:(id)arg1 error:(id*)arg2;
-(char)saveCurrentIconState:(id)arg1 error:(id*)arg2;

@end

