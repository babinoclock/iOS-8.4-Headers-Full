/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSString, NSDate, NSDictionary;

@interface IMFileTransfer : NSObject {

	char _isIncoming;
	char _isDirectory;
	char _shouldAttemptToResume;
	char _wasRegisteredAsStandalone;
	char _shouldForceArchive;
	char _needsWrapper;
	unsigned short _hfsFlags;
	NSURL* _localURL;
	NSData* _localBookmark;
	NSString* _guid;
	NSString* _messageGUID;
	NSDate* _startDate;
	NSDate* _createdDate;
	int _transferState;
	NSString* _filename;
	NSURL* _transferDataURL;
	NSString* _utiType;
	NSString* _mimeType;
	unsigned long _hfsType;
	unsigned long _hfsCreator;
	NSString* _accountID;
	NSString* _otherPerson;
	int _error;
	NSString* _errorDescription;
	NSDictionary* _localUserInfo;
	NSString* _transferredFilename;
	NSDictionary* _transcoderUserInfo;
	double _lastUpdatedInterval;
	double _lastAveragedInterval;
	unsigned long long _lastAveragedBytes;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	unsigned long long _averageTransferRate;

}

@property (nonatomic,readonly) char canBeAccepted; 
@property (nonatomic,readonly) char isFinished; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) char existsAtLocalPath; 
@property (nonatomic,retain) NSString * guid;                                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                        //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                                          //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) int transferState;                                                             //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) char isIncoming;                                                               //@synthesize isIncoming=_isIncoming - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSString * transferredFilename;                                                //@synthesize transferredFilename=_transferredFilename - In the implementation block
@property (nonatomic,retain) NSString * localPath; 
@property (nonatomic,retain) NSString * type;                                                               //@synthesize utiType=_utiType - In the implementation block
@property (nonatomic,retain,readonly) NSString * mimeType;                                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * localURL; 
@property (nonatomic,retain) NSURL * transferDataURL;                                                       //@synthesize transferDataURL=_transferDataURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * localURLWithoutBookmarkResolution;                            //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSData * localBookmark;                                                        //@synthesize localBookmark=_localBookmark - In the implementation block
@property (assign,nonatomic) unsigned long hfsType;                                                         //@synthesize hfsType=_hfsType - In the implementation block
@property (assign,nonatomic) unsigned long hfsCreator;                                                      //@synthesize hfsCreator=_hfsCreator - In the implementation block
@property (assign,nonatomic) unsigned short hfsFlags;                                                       //@synthesize hfsFlags=_hfsFlags - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                          //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString * otherPerson;                                                        //@synthesize otherPerson=_otherPerson - In the implementation block
@property (assign,nonatomic) unsigned long long currentBytes;                                               //@synthesize currentBytes=_currentBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long averageTransferRate;                                        //@synthesize averageTransferRate=_averageTransferRate - In the implementation block
@property (assign,nonatomic) char isDirectory;                                                              //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) char shouldAttemptToResume;                                                    //@synthesize shouldAttemptToResume=_shouldAttemptToResume - In the implementation block
@property (assign,nonatomic) char shouldForceArchive;                                                       //@synthesize shouldForceArchive=_shouldForceArchive - In the implementation block
@property (assign,nonatomic) int error;                                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * errorDescription;                                                   //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * transcoderUserInfo;                                             //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                       //@synthesize localUserInfo=_localUserInfo - In the implementation block
@property (assign,setter=setRegisteredAsStandalone:,nonatomic) char wasRegisteredAsStandalone;              //@synthesize wasRegisteredAsStandalone=_wasRegisteredAsStandalone - In the implementation block
@property (assign,setter=_setLastUpdatedInterval:,nonatomic) double _lastUpdatedInterval;                   //@synthesize lastUpdatedInterval=_lastUpdatedInterval - In the implementation block
@property (assign,setter=_setLastAveragedInterval:,nonatomic) double _lastAveragedInterval;                 //@synthesize lastAveragedInterval=_lastAveragedInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long _lastAveragedBytes;                                       //@synthesize lastAveragedBytes=_lastAveragedBytes - In the implementation block
@property (assign,setter=_setNeedsWrapper:,nonatomic) char _needsWrapper;                                   //@synthesize needsWrapper=_needsWrapper - In the implementation block
+(char)_doesLocalURLRequireArchiving:(id)arg1 ;
+(id)_invalidCharactersForFileTransferName;
-(void)_clear;
-(void)_setStartDate:(id)arg1 ;
-(void)_setError:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)mimeType;
-(NSURL *)localURL;
-(NSString *)displayName;
-(char)isFinished;
-(NSString *)messageGUID;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(unsigned long long)currentBytes;
-(void)setTranscoderUserInfo:(NSDictionary *)arg1 ;
-(int)error;
-(NSString *)filename;
-(NSString *)accountID;
-(char)isDirectory;
-(void)setFilename:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(char)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned long)arg8 hfsCreator:(unsigned long)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(char)arg11 ;
-(void)_setAccount:(id)arg1 otherPerson:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(void)_setForceArchive:(char)arg1 ;
-(void)_setTransferState:(int)arg1 ;
-(void)_setLocalURL:(id)arg1 ;
-(NSString *)otherPerson;
-(void)setRegisteredAsStandalone:(char)arg1 ;
-(char)_updateWithDictionaryRepresentation:(id)arg1 ;
-(char)wasRegisteredAsStandalone;
-(void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 ;
-(void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3 ;
-(char)isIncoming;
-(int)transferState;
-(NSString *)localPath;
-(void)setCurrentBytes:(unsigned long long)arg1 ;
-(void)_setLocalPath:(id)arg1 ;
-(unsigned short)hfsFlags;
-(void)_calculateTypeInformation;
-(NSString *)transferredFilename;
-(void)_setDirectory:(char)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4 ;
-(char)canBeAccepted;
-(char)existsAtLocalPath;
-(void)_setTransferDataURL:(id)arg1 ;
-(unsigned long)hfsType;
-(NSURL *)localURLWithoutBookmarkResolution;
-(NSData *)localBookmark;
-(void)setLocalBookmark:(NSData *)arg1 ;
-(double)_lastUpdatedInterval;
-(void)_setLastUpdatedInterval:(double)arg1 ;
-(double)_lastAveragedInterval;
-(void)_setLastAveragedInterval:(double)arg1 ;
-(unsigned long long)_lastAveragedBytes;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setIsIncoming:(char)arg1 ;
-(NSURL *)transferDataURL;
-(void)setHfsType:(unsigned long)arg1 ;
-(void)setHfsFlags:(unsigned short)arg1 ;
-(unsigned long)hfsCreator;
-(void)setHfsCreator:(unsigned long)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setOtherPerson:(NSString *)arg1 ;
-(unsigned long long)averageTransferRate;
-(void)setAverageTransferRate:(unsigned long long)arg1 ;
-(void)setIsDirectory:(char)arg1 ;
-(char)shouldAttemptToResume;
-(void)setShouldAttemptToResume:(char)arg1 ;
-(void)_setErrorDescription:(id)arg1 ;
-(char)shouldForceArchive;
-(char)_needsWrapper;
-(void)_setNeedsWrapper:(char)arg1 ;
-(void)setTransferredFilename:(NSString *)arg1 ;
-(NSString *)errorDescription;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(NSDate *)startDate;
@end

