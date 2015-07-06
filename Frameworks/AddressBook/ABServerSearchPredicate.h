/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABPredicate.h>
#import <AddressBook/DASearchQueryConsumer.h>

@protocol ABPredicateDelegate;
@class NSString, DADConnection, DAContactsSearchQuery, NSMutableArray, NSConditionLock;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {

	void* _source;
	NSString* _accountIdentifier;
	NSString* _searchString;
	char _includeSourceInResults;
	DADConnection* _connection;
	DAContactsSearchQuery* _searchQuery;
	NSMutableArray* _searchResults;
	NSConditionLock* _doneLock;
	int _error;
	id<ABPredicateDelegate> _delegate;
	char _includePhotosInResults;

}

@property (assign,nonatomic) void* source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) char includeSourceInResults;                   //@synthesize includeSourceInResults=_includeSourceInResults - In the implementation block
@property (assign,nonatomic) char includePhotosInResults;                   //@synthesize includePhotosInResults=_includePhotosInResults - In the implementation block
@property (assign,nonatomic) id<ABPredicateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) DADConnection * connection;                    //@synthesize connection=_connection - In the implementation block
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(char)arg4 includePhotosInResults:(char)arg5 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3 ;
-(void)setIncludeSourceInResults:(char)arg1 ;
-(void)setIncludePhotosInResults:(char)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(char)arg4 ;
-(char)includePhotosInResults;
-(void)runPredicate;
-(void)runPredicateWithDelegate:(id)arg1 ;
-(void)_searchQueryIsDone;
-(int)_errorForDAStatusCode:(int)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 ;
-(char)includeSourceInResults;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ABPredicateDelegate>)arg1 ;
-(id<ABPredicateDelegate>)delegate;
-(NSString *)searchString;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(int)error;
-(NSString *)accountIdentifier;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
@end

