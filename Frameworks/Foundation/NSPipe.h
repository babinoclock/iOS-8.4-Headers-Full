/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSFileHandle;

@interface NSPipe : NSObject

@property (retain,readonly) NSFileHandle * fileHandleForReading; 
@property (retain,readonly) NSFileHandle * fileHandleForWriting; 
+(id)pipe;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
-(id)init;
@end

