/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 12:41:34 by ada-cunh          #+#    #+#             */
/*   Updated: 2018/03/05 09:30:55 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHT_H
# define LIGHT_H

# include "rtv1.h"

void		set_ambient_light(t_color *c, t_object obj);

void		add_diffuse_light(t_color *c, t_object obj, t_light *light, double cos_teta);

void		add_specular_light(t_color *c, t_point r_pos, t_intersection *inter);

t_color		process_light(const t_env *env, t_light *lst_light, t_object *lst_obj, t_intersection *inter, t_ray r);

#endif
