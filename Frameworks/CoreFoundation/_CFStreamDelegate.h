/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStreamDelegate.h>

@class NSString;

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

	unsigned long _flags;
	SCD_Struct_CF13* _client;
	SCD_Union_CF14* _cb;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStreamEvents:(unsigned long)arg1 callback:(void*)arg2 context:(SCD_Struct_CF13*)arg3 ;
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
@end

