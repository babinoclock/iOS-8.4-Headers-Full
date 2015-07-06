/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSString, NSUUID, NSMutableArray, NSArray, PASymbol;

@interface PASymbolOwner : NSObject <PASerializable> {

	NSString* _name;
	NSString* _path;
	NSUUID* _uuid;
	unsigned long long _textSegmentLength;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _binaryVersion;
	NSMutableArray* _symbols;
	NSArray* _oldSymbols;
	PASymbol* _testSymbol;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (retain) NSString * path;                                     //@synthesize path=_path - In the implementation block
@property (readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long textSegmentLength;              //@synthesize textSegmentLength=_textSegmentLength - In the implementation block
@property (readonly) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (readonly) NSString * bundleShortVersion;                     //@synthesize bundleShortVersion=_bundleShortVersion - In the implementation block
@property (readonly) NSString * binaryVersion;                          //@synthesize binaryVersion=_binaryVersion - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)bundleVersion;
-(unsigned)_insertionIndexInSymbols:(id)arg1 forSymbolWithOffsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(id)_symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 inSymbols:(id)arg2 ;
-(void)gatherBundleInfo;
-(void)incorporateDataFromCSSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(id)initWithCSSymbolOwnerRef:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(id)addSymbol:(id)arg1 ;
-(id)symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(id)oldSymbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(void)incorporateDataFromPACSSymbolOwner:(id)arg1 ;
-(id)initWithUUID:(id)arg1 andPath:(id)arg2 ;
-(id)initWithCSSymbolOwnerRef:(CSTypeRef)arg1 ;
-(id)initWithPACSSymbolOwner:(id)arg1 ;
-(int)compareInfoRichnessToSymbolOwner:(id)arg1 ;
-(unsigned long long)textSegmentLength;
-(NSString *)bundleShortVersion;
-(NSString *)binaryVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(char)containsSymbol:(id)arg1 ;
-(id)_initWithSerializedSymbolOwner:(const SCD_Struct_PA3*)arg1 ;
@end

