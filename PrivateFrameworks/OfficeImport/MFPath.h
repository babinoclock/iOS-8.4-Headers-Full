/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface MFPath : NSObject <NSCopying>
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)currentPoint;
-(int)begin;
-(int)end;
-(char)isOpen;
-(int)stroke:(id)arg1 ;
-(int)flatten;
-(int)closeFigure;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(int)abort;
@end
