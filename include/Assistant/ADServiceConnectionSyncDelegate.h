/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol ADServiceConnectionSyncDelegate
- (void)syncFinishedOnConnection:(id)connection;
- (void)connection:(id)connection receivedChunkWithPreAnchor:(id)preAnchor post:(id)post anchorValidity:(id)validity toAdd:(id)add toRemove:(id)remove continueBlock:(id)block;
@end

