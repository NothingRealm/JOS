/* See COPYRIGHT for copyright information. */

#ifndef JOS_KERN_TRAP_H
#define JOS_KERN_TRAP_H
#ifndef JOS_KERNEL
# error "This is a JOS kernel header; user programs should not #include it"
#endif

#include <inc/trap.h>
#include <inc/mmu.h>

/* The kernel's interrupt descriptor table */
extern struct Gatedesc idt[];
extern struct Pseudodesc idt_pd;

void trap_init(void);
void trap_init_percpu(void);
void print_regs(struct PushRegs *regs);
void print_trapframe(struct Trapframe *tf);
void page_fault_handler(struct Trapframe *);
void backtrace(struct Trapframe *);
void breakpoint_handler(struct Trapframe *);

extern void F_DIVIDE(); 
extern void F_DEBUG();  
extern void F_NMI(); 
extern void F_BRKPT(); 
extern void F_OFLOW(); 
extern void F_BOUND(); 
extern void F_ILLOP(); 
extern void F_DEVICE(); 
extern void F_DBLFLT(); 
extern void F_TSS(); 
extern void F_SEGNP(); 
extern void F_STACK(); 
extern void F_GPFLT(); 
extern void F_PGFLT(); 
extern void F_FPERR(); 
extern void F_ALIGN(); 
extern void F_MCHK(); 
extern void F_SIMDERR(); 
extern void F_SYSCALL();
extern void F_DEFAULT();

extern void F_IRQ0();
extern void F_IRQ1();
extern void F_IRQ2();
extern void F_IRQ3();
extern void F_IRQ4();
extern void F_IRQ5();
extern void F_IRQ6();
extern void F_IRQ7();
extern void F_IRQ8();
extern void F_IRQ9();
extern void F_IRQ10();
extern void F_IRQ11();
extern void F_IRQ12();
extern void F_IRQ13();
extern void F_IRQ14();
extern void F_IRQ15();

#endif /* JOS_KERN_TRAP_H */

