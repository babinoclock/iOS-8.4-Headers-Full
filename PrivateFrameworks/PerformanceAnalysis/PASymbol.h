/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSString, NSMutableArray;

@interface PASymbol : NSObject <PASerializable> {

	NSString* _name;
	unsigned long long _length;
	unsigned long long _offsetInOwner;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long length;                       //@synthesize length=_length - In the implementation block
@property (readonly) unsigned long long offsetIntoOwner;              //@synthesize offsetInOwner=_offsetInOwner - In the implementation block
@property (readonly) char isEmptySymbol; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSString *)name;
-(unsigned long long)length;
-(void)addSourceInfo:(id)arg1 ;
-(id)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg1 ;
-(id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg1 ;
-(void)setOffsetIntoOwner:(unsigned long long)arg1 ;
-(id)initWithCSSymbolRef:(CSTypeRef)arg1 ;
-(char)hasAnySourceInfo;
-(id)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg1 ;
-(char)isEmptySymbol;
-(char)containsOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(int)compareToSymbol:(id)arg1 ;
-(int)compareInfoRichnessToSymbol:(id)arg1 ;
-(void)copySourceInfoFromSymbol:(id)arg1 ;
-(unsigned long long)offsetIntoOwner;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSymbol:(const SCD_Struct_PA0*)arg1 ;
@end

