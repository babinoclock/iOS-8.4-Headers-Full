/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKGroupDelegate <NSObject>
@required
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned)arg3;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned)arg3;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned)arg2 toIndex:(unsigned)arg3;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned)arg3;

@end

