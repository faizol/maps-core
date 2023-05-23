// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#import "MCFormattedStringEntry.h"


@implementation MCFormattedStringEntry

- (nonnull instancetype)initWithText:(nonnull NSString *)text
                               scale:(float)scale
{
    if (self = [super init]) {
        _text = [text copy];
        _scale = scale;
    }
    return self;
}

+ (nonnull instancetype)formattedStringEntryWithText:(nonnull NSString *)text
                                               scale:(float)scale
{
    return [[self alloc] initWithText:text
                                scale:scale];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[MCFormattedStringEntry class]]) {
        return NO;
    }
    MCFormattedStringEntry *typedOther = (MCFormattedStringEntry *)other;
    return [self.text isEqualToString:typedOther.text] &&
            self.scale == typedOther.scale;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.text.hash ^
            (NSUInteger)self.scale;
}

- (NSComparisonResult)compare:(MCFormattedStringEntry *)other
{
    NSComparisonResult tempResult;
    tempResult = [self.text compare:other.text];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.scale < other.scale) {
        tempResult = NSOrderedAscending;
    } else if (self.scale > other.scale) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p text:%@ scale:%@>", self.class, (void *)self, self.text, @(self.scale)];
}

#endif
@end
