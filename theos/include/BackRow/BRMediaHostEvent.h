/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class NSString;

@interface BRMediaHostEvent : NSObject {
@private
	NSString *_description;	// 4 = 0x4
}
@property(readonly, retain) NSString *description;	// G=0x3158fcf1; converted property
+ (id)mediaHostReady;	// 0x31632b45
+ (id)mediaProviderAdded;	// 0x3158fa51
+ (id)mediaProviderLoadFailed;	// 0x31632a79
+ (id)mediaProviderLoaded;	// 0x31591a45
+ (id)mediaProviderRemoved;	// 0x315916c5
+ (id)mediaProviderUnloaded;	// 0x316328e1
+ (id)mediaProviderUnloading;	// 0x316329ad
+ (id)mount;	// 0x31590a2d
+ (id)remove;	// 0x3158f889
+ (id)reset;	// 0x31591481
+ (id)unmount;	// 0x3158f6b9
- (id)initWithDescription:(id)description;	// 0x3158f785
- (void)dealloc;	// 0x31632899
// converted property getter: - (id)description;	// 0x3158fcf1
@end
