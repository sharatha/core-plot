/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <AppKit/NSView.h>

@class NSString;

@interface NSCustomView : NSView
{
    NSString *className;
    NSView *view;
    id extension;
}

+ (void)initialize;
- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (void)finalize;
- (id)nibInstantiate;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end

