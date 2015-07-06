/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString, NSArray;

@interface NSNetService : NSObject {

	id _netService;
	id _delegate;
	id _reserved;

}

@property (assign) id<NSNetServiceDelegate> delegate; 
@property (assign) char includesPeerToPeer; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * hostName; 
@property (copy,readonly) NSArray * addresses; 
@property (readonly) int port; 
+(id)dataFromTXTRecordDictionary:(id)arg1 ;
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
-(id)_monitors;
-(CFNetServiceRef)_internalNetService;
-(void)_scheduleInDefaultRunLoopForMode:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(id)normalizedType;
-(char)includesPeerToPeer;
-(char)_includesAWDL;
-(void)_internal_publishWithOptions:(unsigned)arg1 ;
-(void)publishWithServer:(unsigned)arg1 ;
-(void)publishWithOptions:(unsigned)arg1 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)setIncludesPeerToPeer:(char)arg1 ;
-(void)_setIncludesAWDL:(char)arg1 ;
-(void)_dispatchCallBackWithError:(SCD_Struct_NS19)arg1 ;
-(char)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(void)resolve;
-(void)startMonitoring;
-(void)stopMonitoring;
-(char)setTXTRecordData:(id)arg1 ;
-(id)TXTRecordData;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)publish;
-(NSArray *)addresses;
-(void)dealloc;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<NSNetServiceDelegate>)delegate;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(void)stop;
-(int)port;
-(NSString *)hostName;
-(void)finalize;
@end

