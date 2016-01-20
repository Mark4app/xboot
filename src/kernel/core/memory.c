/*
 * kernel/core/memory.c
 *
 * Copyright(c) 2007-2015 Jianjun Jiang <8192542@qq.com>
 * Official site: http://xboot.org
 * Mobile phone: +86-18665388956
 * QQ: 8192542
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <memory.h>

static void __memory_map(struct mmap_t * map)
{
}
extern __typeof(__memory_map) memory_map __attribute__((weak, alias("__memory_map")));

static virtual_addr_t __phys_to_virt(physical_addr_t phys)
{
	return (virtual_addr_t)phys;
}
extern __typeof(__phys_to_virt) phys_to_virt __attribute__((weak, alias("__phys_to_virt")));

static physical_addr_t __virt_to_phys(virtual_addr_t virt)
{
	return (physical_addr_t)virt;
}
extern __typeof(__virt_to_phys) virt_to_phys __attribute__((weak, alias("__virt_to_phys")));
