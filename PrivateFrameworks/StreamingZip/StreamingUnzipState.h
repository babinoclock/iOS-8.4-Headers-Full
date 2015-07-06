/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StreamingZip/StreamingZip-Structs.h>
@class NSString, NSArray, NSDictionary, NSMutableData;

@interface StreamingUnzipState : NSObject {

	z_stream_s* _zlibState;
	unsigned long long _lastResumptionSavedOffset;
	unsigned long long _hashedChunkSize;
	unsigned long long _bytesHashedInChunk;
	unsigned long long _uncompressedBytesOutput;
	NSString* _unzipPath;
	NSArray* _hashes;
	unsigned long _currentLFRecordAllocationSize;
	SCD_Struct_St7 _hashContext;
	NSDictionary* _streamInfoDict;
	NSString* _lastChunkPartialHash;
	NSMutableData* _unsureData;
	NSMutableData* _inMemoryFileData;
	NSMutableData* _unfinishedCompressedData;
	SCD_Struct_St11* _currentLFRecord;
	SCD_Struct_St15* _dataDescriptor;
	unsigned long long _thisStageBytesComplete;
	unsigned long long _currentOffset;
	unsigned long long _outputFileOffsetAtLastBlockEnd;
	unsigned long long _recordsProcessed;
	unsigned long long _totalRecordCount;
	unsigned long _currentCRC32;
	int _currentOutputFD;
	unsigned short _currentLFMode;
	unsigned char _streamState;
	unsigned char _lastBlockEndNumUnusedBits;
	unsigned char _lastBlockEndLastByte;
	char _storeCurrentFileInMemory;
	char _currentLFRequiresDataDescriptor;

}

@property (nonatomic,readonly) z_stream_s* zlibState; 
@property (nonatomic,readonly) NSString * unzipPath;                                   //@synthesize unzipPath=_unzipPath - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St16 hashContext;                            //@synthesize hashContext=_hashContext - In the implementation block
@property (nonatomic,retain) NSDictionary * streamInfoDict;                            //@synthesize streamInfoDict=_streamInfoDict - In the implementation block
@property (nonatomic,retain) NSString * lastChunkPartialHash;                          //@synthesize lastChunkPartialHash=_lastChunkPartialHash - In the implementation block
@property (nonatomic,retain) NSMutableData * unsureData;                               //@synthesize unsureData=_unsureData - In the implementation block
@property (nonatomic,retain) NSMutableData * inMemoryFileData;                         //@synthesize inMemoryFileData=_inMemoryFileData - In the implementation block
@property (nonatomic,retain) NSMutableData * unfinishedCompressedData;                 //@synthesize unfinishedCompressedData=_unfinishedCompressedData - In the implementation block
@property (assign,nonatomic) SCD_Struct_St11* currentLFRecord;                         //@synthesize currentLFRecord=_currentLFRecord - In the implementation block
@property (assign,nonatomic) unsigned long currentLFRecordAllocationSize;              //@synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize - In the implementation block
@property (assign,nonatomic) unsigned long long thisStageBytesComplete;                //@synthesize thisStageBytesComplete=_thisStageBytesComplete - In the implementation block
@property (assign,nonatomic) unsigned long long currentOffset;                         //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long hashedChunkSize;                     //@synthesize hashedChunkSize=_hashedChunkSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesHashedInChunk;                  //@synthesize bytesHashedInChunk=_bytesHashedInChunk - In the implementation block
@property (assign,nonatomic) unsigned long currentCRC32;                               //@synthesize currentCRC32=_currentCRC32 - In the implementation block
@property (assign,nonatomic) int currentOutputFD;                                      //@synthesize currentOutputFD=_currentOutputFD - In the implementation block
@property (assign,nonatomic) unsigned long long recordsProcessed;                      //@synthesize recordsProcessed=_recordsProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long totalRecordCount;                      //@synthesize totalRecordCount=_totalRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedBytesOutput;               //@synthesize uncompressedBytesOutput=_uncompressedBytesOutput - In the implementation block
@property (assign,nonatomic) unsigned short currentLFMode;                             //@synthesize currentLFMode=_currentLFMode - In the implementation block
@property (assign,nonatomic) unsigned char streamState;                                //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) char storeCurrentFileInMemory;                            //@synthesize storeCurrentFileInMemory=_storeCurrentFileInMemory - In the implementation block
@property (assign,nonatomic) char currentLFRequiresDataDescriptor;                     //@synthesize currentLFRequiresDataDescriptor=_currentLFRequiresDataDescriptor - In the implementation block
@property (assign,nonatomic) SCD_Struct_St15* dataDescriptor;                          //@synthesize dataDescriptor=_dataDescriptor - In the implementation block
+(id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setStreamState:(unsigned char)arg1 ;
-(NSString *)unzipPath;
-(void)setCurrentOutputFD:(int)arg1 ;
-(int)currentOutputFD;
-(NSMutableData *)unsureData;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 ;
-(id)serializeState;
-(unsigned char)streamState;
-(SCD_Struct_St11*)currentLFRecord;
-(unsigned long long)thisStageBytesComplete;
-(unsigned long long)hashedChunkSize;
-(unsigned long long)bytesHashedInChunk;
-(NSString *)lastChunkPartialHash;
-(id)checkLastChunkPartialHash;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 onlyFinishCurrentChunk:(char)arg4 ;
-(void)markResumptionPoint;
-(void)setCurrentLFRequiresDataDescriptor:(char)arg1 ;
-(char)currentLFRequiresDataDescriptor;
-(unsigned long)currentLFRecordAllocationSize;
-(void)setCurrentLFRecord:(SCD_Struct_St11*)arg1 ;
-(void)setCurrentLFRecordAllocationSize:(unsigned long)arg1 ;
-(unsigned long long)recordsProcessed;
-(void)setStoreCurrentFileInMemory:(char)arg1 ;
-(NSDictionary *)streamInfoDict;
-(void)setCurrentLFMode:(unsigned short)arg1 ;
-(unsigned short)currentLFMode;
-(char)storeCurrentFileInMemory;
-(void)setCurrentCRC32:(unsigned long)arg1 ;
-(unsigned long)currentCRC32;
-(NSMutableData *)inMemoryFileData;
-(void)setThisStageBytesComplete:(unsigned long long)arg1 ;
-(unsigned long long)uncompressedBytesOutput;
-(void)setUncompressedBytesOutput:(unsigned long long)arg1 ;
-(z_stream_s*)zlibState;
-(NSMutableData *)unfinishedCompressedData;
-(void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1 ;
-(SCD_Struct_St15*)dataDescriptor;
-(void)setDataDescriptor:(SCD_Struct_St15*)arg1 ;
-(void)setStreamInfoDict:(NSDictionary *)arg1 ;
-(void)setUnsureData:(NSMutableData *)arg1 ;
-(void)setTotalRecordCount:(unsigned long long)arg1 ;
-(SCD_Struct_St16)hashContext;
-(void)setLastChunkPartialHash:(NSString *)arg1 ;
-(id)finishStream;
-(id)_checkHashForOffset:(unsigned long long)arg1 ;
-(void)clearSavedState;
-(void)_internalSetStreamState:(unsigned char)arg1 ;
-(void)setInMemoryFileData:(NSMutableData *)arg1 ;
-(void)setUnfinishedCompressedData:(NSMutableData *)arg1 ;
-(void)setRecordsProcessed:(unsigned long long)arg1 ;
-(unsigned long long)totalRecordCount;
-(unsigned long long)currentOffset;
@end
