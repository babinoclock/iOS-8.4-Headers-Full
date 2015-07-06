/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	void* _private;
	void** _reserved[6];

}

@property (readonly) unsigned numberOfArguments; 
@property (readonly) unsigned frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(char)_cheapTypeString:(char*)arg1 maxLength:(long)arg2 ;
-(SCD_Struct_NS17*)_frameDescriptor;
-(NSMethodFrameArgInfo*)_argInfo:(int)arg1 ;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(int)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(int)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(int)arg1 ;
-(char)isOneway;
-(char)_isHiddenStructRet;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(unsigned)numberOfArguments;
-(const char*)getArgumentTypeAtIndex:(unsigned)arg1 ;
-(unsigned)methodReturnLength;
-(const char*)methodReturnType;
-(unsigned)frameLength;
-(void)finalize;
@end
