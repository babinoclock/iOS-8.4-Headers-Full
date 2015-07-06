/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object, NSXPCEncoderDelegate;
@class NSObject, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder {

	NSObject*<OS_xpc_object> _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedObjects;
	CFDictionaryRef _replacedByDelegateObjects;
	id<NSXPCEncoderDelegate> _delegate;
	char _askForReplacement;
	void* _encoder;
	unsigned long long _genericIndex;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) id<NSXPCEncoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_dataWithXPCObject:(id)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)_insertIntoXPCObject:(id)arg1 ;
-(void)_encodeCString:(const char*)arg1 forKey:(id)arg2 ;
-(void)encodeInvocation:(id)arg1 ;
-(id)_replaceObject:(id)arg1 ;
-(void)_checkObject:(id)arg1 ;
-(void)_encodeObject:(id)arg1 ;
-(id)_createRootXPCObject;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<NSXPCEncoderDelegate>)arg1 ;
-(id)init;
-(id)debugDescription;
-(id<NSXPCEncoderDelegate>)delegate;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(char)allowsKeyedCoding;
-(void)encodeInteger:(int)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(void)finalize;
@end

