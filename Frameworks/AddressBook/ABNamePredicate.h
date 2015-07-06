/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {

	void* _addressBook;
	NSString* _name;
	char _matchWholeWords;
	char _matchPersonOrCompanyNamesExclusively;
	char _matchPreferredName;
	void* _tokenizations;
	CFArrayRef _tokenizationSortKeys;
	NSArray* _groups;
	NSArray* _sources;

}

@property (assign,nonatomic) void* addressBook;                                      //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) void* source; 
@property (assign,nonatomic) void* group; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) char matchWholeWords;                                   //@synthesize matchWholeWords=_matchWholeWords - In the implementation block
@property (assign,nonatomic) char matchPersonOrCompanyNamesExclusively;              //@synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively - In the implementation block
@property (assign,nonatomic) char matchPreferredName;                                //@synthesize matchPreferredName=_matchPreferredName - In the implementation block
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void*)tokenizations;
-(id)_personNameKeys;
-(id)queryJoinsInCompound:(char)arg1 ;
-(char)matchWholeWords;
-(void)setMatchWholeWords:(char)arg1 ;
-(char)matchPersonOrCompanyNamesExclusively;
-(void)setMatchPersonOrCompanyNamesExclusively:(char)arg1 ;
-(char)matchPreferredName;
-(void)setMatchPreferredName:(char)arg1 ;
-(id)predicateFormat;
-(void)setGroups:(NSArray *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)isValid;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(NSString *)accountIdentifier;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(NSArray *)groups;
-(void*)addressBook;
@end

