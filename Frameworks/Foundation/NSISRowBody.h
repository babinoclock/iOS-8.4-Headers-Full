/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSISRowBody <NSObject>
@required
-(void)enumerateVariables:(/*^block*/id)arg1;
-(void)removeVariable:(id)arg1;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;

@end

