//Package queue implements queue using array
package queue

import (
	"sync"
	"github.com/cheekybits/genny/generic"
)

// Item the type of queue
type Item generic.Type

// ItemQueue the queue of item
type ItemQueue struct {
	items []Item
	lock sync.RWMutex
}

//New creates a new ItemQueue
func (s *ItemQueue) New() *ItemQueue {
	s.items = []Item{}
	return s
}

//Enqueue adds the item in the end of queue
func (s *ItemQueue) Enqueue(t Item) {
	s.lock.Lock()
	defer s.lock.Unlock()
	s.items = append(s.items, t)
}

//Dequeue removes an element from the front end
func (s *ItemQueue) Dequeue() *Item {
	s.lock.Lock()
	defer s.lock.Unlock()
	item := s.items[0]
	s.items = s.items[1:len(s.items)]
	return &item
}

//Front returns the item next in the queue without removing it
func (s *ItemQueue) Front() *Item {
	s.lock.RLock()
	defer s.lock.RUnlock()
	item := s.items[0]
	return &item
}

//IsEmpty returns true if the queue is empty
func (s *ItemQueue) IsEmpty() bool {
	return len(s.items) == 0
}

//Size returns the number of Items in the queue
func (s *ItemQueue) Size() int {
	return len(s.items)
}
