// TODO: Export specs that extend HybridObject<...> here
import type { HybridObject } from 'react-native-nitro-modules'

export interface ContactListener
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  startListening(callback: (event: ContactEvent) => void): void

  stopListening(): void
}

export interface ContactEvent {
  type: ContactEventType
  contactId: string
}

export type ContactEventType = 'added' | 'updated' | 'deleted'
