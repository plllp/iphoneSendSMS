/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class UIImageView;

@interface CKTypingIndicatorView : XXUnknownSuperclass {
	UIImageView *_typingIndicatorImageView;	// 48 = 0x30
	UIImageView *_contactImageView;	// 52 = 0x34
	BOOL _editing;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x81f0d; S=0x81f1d; @synthesize=_editing
- (id)initWithFrame:(CGRect)frame;	// 0x81f2d
- (void)dealloc;	// 0x82561
- (void)layoutSubviews;	// 0x82311
- (void)setContactImage:(id)image;	// 0x8201d
// declared property getter: - (BOOL)isEditing;	// 0x81f0d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x81f1d
@end
