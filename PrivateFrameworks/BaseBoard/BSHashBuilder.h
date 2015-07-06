/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned _hash;

}
+(id)builder;
-(id)init;
-(unsigned)hash;
-(id)appendCGFloat:(float)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(void)_append:(unsigned)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
-(id)appendInteger:(int)arg1 ;
-(id)appendBool:(char)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)appendUnsignedInteger:(unsigned)arg1 ;
-(id)appendArray:(id)arg1 ;
-(id)appendDouble:(double)arg1 ;
@end
